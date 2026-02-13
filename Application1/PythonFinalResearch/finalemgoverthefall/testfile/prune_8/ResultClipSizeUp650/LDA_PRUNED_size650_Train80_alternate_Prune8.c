// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_8\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.81%
// test_accuracy: 73.96%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt']}
// generated: 2026-02-13 14:47:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.194609, 0.194612,
    -0.135898, 0.136075,
    -0.095654, 0.095628,
    0.091938, -0.092031,
    1.794031, -1.794532,
    -1.568797, 1.569442,
    -0.035723, 0.035614,
    0.139862, -0.139966,
    -0.554793, 0.554839,
    -0.515579, 0.515535,
    0.499462, -0.499499,
    1.288034, -1.288033,
};

float Cg_init[2] = {
    -0.586011, -0.586162
};

float xstd_init[12] = {
    0.000897, 0.000077, 0.008044, 0.063725, 0.000747, 0.000125, 0.014036, 0.051685, 0.003370, 0.001015, 0.118423, 0.210922
};

float xmean_init[12] = {
    0.005548, -0.007757, 0.002130, 0.092431, 0.002390, -0.007850, 0.004676, 0.046667, 0.009008, -0.006593, 0.136713, 0.471320
};

