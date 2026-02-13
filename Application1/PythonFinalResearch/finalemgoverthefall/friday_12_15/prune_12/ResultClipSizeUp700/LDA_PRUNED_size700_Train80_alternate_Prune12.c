// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.65%
// test_accuracy: 67.79%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_24.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt', 'act1\\trial_22.txt']}
// generated: 2025-12-12 12:46:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.757248, 0.757255,
    0.448069, -0.448041,
    0.449852, -0.449878,
    0.809165, -0.809166,
    -0.751617, 0.751507,
    0.347839, -0.347700,
    -0.039452, 0.039447,
    -0.070716, 0.070687,
    0.352061, -0.352118,
    -0.141595, 0.141728,
    -0.595945, 0.595911,
    -0.133111, 0.133063,
};

float Cg_init[2] = {
    -0.442165, -0.442170
};

float xstd_init[12] = {
    0.003996, 0.001695, 0.150427, 0.207266, 0.001174, 0.000207, 0.030778, 0.085506, 0.000715, 0.000182, 0.030522, 0.112615
};

float xmean_init[12] = {
    0.010274, -0.005767, 0.248001, 0.689308, 0.003465, -0.007751, 0.010821, 0.082077, 0.003559, -0.007722, 0.013641, 0.126616
};

