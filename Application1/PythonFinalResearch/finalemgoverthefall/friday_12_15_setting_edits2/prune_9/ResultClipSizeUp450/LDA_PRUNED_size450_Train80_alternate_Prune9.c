// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_9\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.59%
// test_accuracy: 77.34%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_28.txt']}
// generated: 2025-12-17 12:40:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.980661, 0.980662,
    0.206700, -0.206701,
    0.186222, -0.186245,
    1.252121, -1.252103,
    -0.595213, 0.595276,
    0.256980, -0.257050,
    0.004293, -0.004287,
    -0.236084, 0.236087,
    0.349125, -0.349083,
    -0.099698, 0.099588,
    -0.783429, 0.783464,
    0.006816, -0.006785,
};

float Cg_init[2] = {
    -0.521778, -0.521777
};

float xstd_init[12] = {
    0.004481, 0.001877, 0.149420, 0.205395, 0.001308, 0.000226, 0.034233, 0.091131, 0.000704, 0.000181, 0.032949, 0.108449
};

float xmean_init[12] = {
    0.010795, -0.005582, 0.250073, 0.692391, 0.003493, -0.007744, 0.011812, 0.080544, 0.003581, -0.007719, 0.015145, 0.125218
};

