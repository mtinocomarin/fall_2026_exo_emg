// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_9\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.43%
// test_accuracy: 78.75%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt']}
// generated: 2025-12-17 12:40:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.616349, 1.616347,
    0.473103, -0.473074,
    0.592650, -0.592680,
    1.246088, -1.246065,
    -0.219368, 0.219421,
    -0.081932, 0.081825,
    0.091791, -0.091781,
    -0.315886, 0.315918,
    0.038982, -0.039071,
    -0.081360, 0.081551,
    -0.396363, 0.396314,
    -0.164172, 0.164094,
};

float Cg_init[2] = {
    -0.614051, -0.614053
};

float xstd_init[12] = {
    0.004631, 0.002008, 0.146688, 0.200527, 0.001535, 0.000281, 0.038583, 0.100692, 0.000656, 0.000140, 0.025831, 0.095753
};

float xmean_init[12] = {
    0.011225, -0.005463, 0.257740, 0.706608, 0.003639, -0.007714, 0.013913, 0.088696, 0.003555, -0.007738, 0.011942, 0.117739
};

