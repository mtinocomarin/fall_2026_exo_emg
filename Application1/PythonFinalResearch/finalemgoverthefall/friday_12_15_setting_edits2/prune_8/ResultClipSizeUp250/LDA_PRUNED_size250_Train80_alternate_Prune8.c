// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_8\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.71%
// test_accuracy: 81.25%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_29.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-17 12:39:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.725274, 1.725302,
    0.849363, -0.849362,
    0.229847, -0.229870,
    1.686594, -1.686578,
    -0.001026, 0.000867,
    -0.240565, 0.240707,
    0.248879, -0.248857,
    -0.704603, 0.704594,
    -0.248897, 0.248821,
    0.174734, -0.174606,
    -0.783393, 0.783366,
    0.075071, -0.075107,
};

float Cg_init[2] = {
    -0.810050, -0.810051
};

float xstd_init[12] = {
    0.004283, 0.001858, 0.148332, 0.190586, 0.001520, 0.000270, 0.038966, 0.099947, 0.000666, 0.000170, 0.032498, 0.107460
};

float xmean_init[12] = {
    0.011117, -0.005519, 0.252361, 0.708125, 0.003612, -0.007719, 0.012500, 0.087917, 0.003580, -0.007717, 0.014444, 0.130208
};

