// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.33%
// test_accuracy: 79.17%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 12:38:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.920580, 0.920557,
    0.185617, -0.185563,
    0.343835, -0.343861,
    0.812388, -0.812384,
    -0.441386, 0.441240,
    0.132328, -0.132154,
    -0.050015, 0.050017,
    -0.055686, 0.055655,
    0.286233, -0.286277,
    0.050657, -0.050545,
    -0.583957, 0.583934,
    -0.197092, 0.197047,
};

float Cg_init[2] = {
    -0.357043, -0.357045
};

float xstd_init[12] = {
    0.004580, 0.002092, 0.146815, 0.202454, 0.001233, 0.000221, 0.031239, 0.091802, 0.000690, 0.000171, 0.029435, 0.106988
};

float xmean_init[12] = {
    0.010628, -0.005612, 0.243192, 0.683077, 0.003470, -0.007747, 0.010826, 0.080855, 0.003543, -0.007730, 0.013390, 0.120599
};

