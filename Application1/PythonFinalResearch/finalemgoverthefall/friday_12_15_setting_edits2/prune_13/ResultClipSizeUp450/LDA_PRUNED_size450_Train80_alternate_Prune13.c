// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.45%
// test_accuracy: 76.56%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt', 'act1\\trial_2.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_28.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_26.txt']}
// generated: 2025-12-17 12:42:09
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.495957, 1.495975,
    0.322703, -0.322698,
    0.086376, -0.086400,
    1.776139, -1.776119,
    -0.415282, 0.415220,
    0.202811, -0.202763,
    -0.096666, 0.096667,
    -0.343038, 0.343032,
    0.301849, -0.301907,
    -0.021171, 0.021308,
    -0.805374, 0.805342,
    0.105379, -0.105437,
};

float Cg_init[2] = {
    -0.670985, -0.670982
};

float xstd_init[12] = {
    0.004389, 0.001889, 0.151150, 0.206651, 0.001403, 0.000243, 0.036767, 0.094046, 0.000628, 0.000153, 0.025836, 0.099118
};

float xmean_init[12] = {
    0.010853, -0.005516, 0.251579, 0.697894, 0.003556, -0.007733, 0.013246, 0.084605, 0.003510, -0.007737, 0.011404, 0.115132
};

