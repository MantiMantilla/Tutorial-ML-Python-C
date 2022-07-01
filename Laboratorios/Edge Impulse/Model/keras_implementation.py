import tensorflow as tf
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense, InputLayer, Dropout, Conv1D, Conv2D, Flatten, Reshape, MaxPooling1D, MaxPooling2D, BatchNormalization, TimeDistributed
from tensorflow.keras.optimizers import Adam

# model architecture
model = Sequential()
# Data augmentation, which can be configured in visual mode
model.add(tf.keras.layers.GaussianNoise(stddev=0.2))
model.add(Dense(256, activation='relu',
    activity_regularizer=tf.keras.regularizers.l1(0.00001)))
model.add(Dropout(0.2))
model.add(Dense(256, activation='relu',
    activity_regularizer=tf.keras.regularizers.l1(0.00001)))
model.add(Dropout(0.2))
model.add(Dense(256, activation='relu',
    activity_regularizer=tf.keras.regularizers.l1(0.00001)))
model.add(Dropout(0.2))
model.add(Dense(classes, activation='softmax', name='y_pred'))

# this controls the learning rate
opt = Adam(learning_rate=0.0005, beta_1=0.9, beta_2=0.999)
# Data augmentation for spectrograms, which can be configured in visual mode.
# To learn what these arguments mean, see the SpecAugment paper:
# https://arxiv.org/abs/1904.08779
sa = SpecAugment(spectrogram_shape=[int(input_length / 40), 40], mF_num_freq_masks=3, F_freq_mask_max_consecutive=12, mT_num_time_masks=1, T_time_mask_max_consecutive=1, enable_time_warp=True, W_time_warp_max_distance=6, mask_with_mean=False)
train_dataset = train_dataset.map(sa.mapper(), num_parallel_calls=tf.data.AUTOTUNE)

EPOCHS = 200
# this controls the batch size, or you can manipulate the tf.data.Dataset objects yourself
BATCH_SIZE = 32
train_dataset = train_dataset.batch(BATCH_SIZE, drop_remainder=False)
validation_dataset = validation_dataset.batch(BATCH_SIZE, drop_remainder=False)
callbacks.append(BatchLoggerCallback(BATCH_SIZE, train_sample_count, epochs=EPOCHS))

# train the neural network
model.compile(loss='categorical_crossentropy', optimizer=opt, metrics=['accuracy'])
model.fit(train_dataset, epochs=EPOCHS, validation_data=validation_dataset, verbose=2, callbacks=callbacks)

# Use this flag to disable per-channel quantization for a model.
# This can reduce RAM usage for convolutional models, but may have
# an impact on accuracy.
disable_per_channel_quantization = False
