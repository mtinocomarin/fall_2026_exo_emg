// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.62%
// test_accuracy: 73.56%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_35.txt', 'act2\\trial_11.txt', 'act2\\trial_24.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 17:03:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.156028, 0.156069,
    -0.218741, 0.218716,
    0.007049, -0.007043,
    0.050070, -0.050067,
    1.684554, -1.684710,
    -1.275376, 1.275593,
    -0.087112, 0.087066,
    0.160835, -0.160884,
    -0.768311, 0.768331,
    -0.329650, 0.329659,
    0.416378, -0.416428,
    1.294969, -1.294956,
};

float Cg_init[2] = {
    -0.580798, -0.580855
};

float xstd_init[12] = {
    0.000904, 0.000077, 0.008500, 0.065623, 0.000672, 0.000104, 0.014610, 0.050896, 0.003483, 0.001056, 0.121038, 0.215972
};

float xmean_init[12] = {
    0.005562, -0.007755, 0.002274, 0.094181, 0.002372, -0.007854, 0.004727, 0.046221, 0.009186, -0.006530, 0.141762, 0.481672
};

