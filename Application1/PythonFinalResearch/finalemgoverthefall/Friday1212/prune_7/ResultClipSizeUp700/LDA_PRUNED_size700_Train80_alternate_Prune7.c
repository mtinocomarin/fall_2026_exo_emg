// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.23%
// test_accuracy: 73.08%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:49:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.549087, 0.549147,
    -0.418173, 0.418144,
    0.376753, -0.376791,
    0.636347, -0.636344,
    0.844384, -0.844304,
    -0.797088, 0.796981,
    -0.231101, 0.231119,
    -0.081762, 0.081765,
    0.786492, -0.786335,
    -0.118395, 0.117999,
    -0.366492, 0.366645,
    0.039085, -0.038972,
};

float Cg_init[2] = {
    -0.475756, -0.475740
};

float xstd_init[12] = {
    0.003823, 0.001427, 0.109817, 0.174671, 0.001280, 0.000392, 0.019832, 0.070254, 0.000509, 0.000077, 0.015875, 0.060251
};

float xmean_init[12] = {
    0.009837, -0.006197, 0.181170, 0.594954, 0.003071, -0.007759, 0.005128, 0.048000, 0.003086, -0.007815, 0.004185, 0.062216
};

