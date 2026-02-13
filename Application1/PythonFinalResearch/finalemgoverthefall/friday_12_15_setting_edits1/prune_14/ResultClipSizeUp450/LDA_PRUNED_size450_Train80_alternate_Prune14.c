// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.76%
// test_accuracy: 64.06%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_27.txt', 'act1\\trial_3.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt', 'act2\\trial_22.txt', 'act2\\trial_26.txt', 'act2\\trial_30.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 13:17:57
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.692669, 0.692754,
    -0.292884, 0.292852,
    0.894771, -0.894787,
    0.464534, -0.464551,
    -0.484199, 0.483969,
    0.010862, -0.010601,
    0.078381, -0.078412,
    0.188829, -0.188855,
    0.209336, -0.209625,
    -0.369570, 0.369997,
    -0.392692, 0.392566,
    0.516744, -0.516758,
};

float Cg_init[2] = {
    -0.441683, -0.441699
};

float xstd_init[12] = {
    0.004425, 0.001830, 0.348060, 0.126643, 0.001201, 0.000209, 0.055022, 0.139641, 0.000690, 0.000184, 0.058499, 0.134908
};

float xmean_init[12] = {
    0.010666, -0.005720, 0.457870, 1.031806, 0.003486, -0.007745, 0.016435, 0.621250, 0.003543, -0.007730, 0.017130, 0.704305
};

