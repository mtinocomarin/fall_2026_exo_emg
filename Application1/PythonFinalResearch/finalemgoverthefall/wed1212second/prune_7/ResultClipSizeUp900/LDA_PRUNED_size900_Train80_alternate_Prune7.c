// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_7\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.94%
// test_accuracy: 72.79%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 17:02:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.263562, 0.263332,
    -0.122541, 0.123036,
    -0.005151, 0.005099,
    0.154636, -0.154892,
    1.358825, -1.358758,
    -0.905104, 0.904938,
    -0.096052, 0.096108,
    0.055934, -0.055904,
    -0.411800, 0.411830,
    -0.458539, 0.458514,
    0.509576, -0.509593,
    0.803387, -0.803401,
};

float Cg_init[2] = {
    -0.418436, -0.418425
};

float xstd_init[12] = {
    0.000924, 0.000073, 0.008198, 0.064980, 0.000656, 0.000102, 0.013538, 0.050965, 0.003286, 0.001003, 0.115390, 0.206805
};

float xmean_init[12] = {
    0.005542, -0.007757, 0.002196, 0.092000, 0.002338, -0.007858, 0.004110, 0.045083, 0.008951, -0.006600, 0.132863, 0.474023
};

