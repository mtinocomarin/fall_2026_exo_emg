// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.90%
// test_accuracy: 73.21%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_23.txt', 'act2\\trial_24.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:17:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.825210, 0.825210,
    0.027024, -0.027030,
    0.868150, -0.868147,
    0.594989, -0.594973,
    -0.382201, 0.382372,
    -0.000234, 0.000056,
    -0.108439, 0.108434,
    0.328451, -0.328438,
    -0.224248, 0.224205,
    -0.036890, 0.036906,
    -0.506741, 0.506746,
    0.467460, -0.467447,
};

float Cg_init[2] = {
    -0.533723, -0.533714
};

float xstd_init[12] = {
    0.004588, 0.001949, 0.353605, 0.125560, 0.001187, 0.000189, 0.055754, 0.131087, 0.000734, 0.000181, 0.056874, 0.143792
};

float xmean_init[12] = {
    0.010885, -0.005607, 0.469841, 1.029365, 0.003475, -0.007753, 0.014815, 0.617143, 0.003611, -0.007719, 0.019841, 0.703015
};

