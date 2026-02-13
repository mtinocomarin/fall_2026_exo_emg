// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.07%
// test_accuracy: 73.56%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-12 13:16:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.639326, 0.639311,
    0.179795, -0.179815,
    0.850737, -0.850704,
    0.449382, -0.449369,
    -0.689028, 0.689199,
    0.209240, -0.209415,
    0.012439, -0.012442,
    0.219472, -0.219458,
    0.348808, -0.348665,
    -0.553809, 0.553587,
    -0.348087, 0.348145,
    0.492613, -0.492596,
};

float Cg_init[2] = {
    -0.468652, -0.468629
};

float xstd_init[12] = {
    0.003951, 0.001631, 0.329538, 0.123196, 0.001169, 0.000211, 0.055174, 0.131669, 0.000672, 0.000175, 0.048408, 0.135721
};

float xmean_init[12] = {
    0.010067, -0.005877, 0.426372, 1.034798, 0.003448, -0.007750, 0.015018, 0.614285, 0.003516, -0.007732, 0.014164, 0.700513
};

