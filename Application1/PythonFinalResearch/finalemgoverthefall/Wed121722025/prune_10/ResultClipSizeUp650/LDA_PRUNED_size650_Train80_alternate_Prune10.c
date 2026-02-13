// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.84%
// test_accuracy: 50.00%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-17 13:46:35
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.778304, 0.778281,
    0.489449, -0.489373,
    0.004326, -0.004333,
    -0.292326, 0.292279,
    -0.513135, 0.513204,
    -0.247919, 0.247840,
    0.214244, -0.214241,
    0.259285, -0.259267,
    -0.629330, 0.629414,
    0.368290, -0.368440,
    -0.027188, 0.027233,
    0.162273, -0.162233,
};

float Cg_init[2] = {
    -0.276472, -0.276481
};

float xstd_init[12] = {
    0.001069, 0.000082, 0.012546, 0.081830, 0.003082, 0.000836, 0.091017, 0.182238, 0.000857, 0.000107, 0.017950, 0.071446
};

float xmean_init[12] = {
    0.006488, -0.007685, 0.004545, 0.146137, 0.008550, -0.006863, 0.104142, 0.439167, 0.004392, -0.007716, 0.009444, 0.128106
};

