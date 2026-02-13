// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.00%
// test_accuracy: 70.19%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 12:43:10
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.689625, 0.689676,
    0.297770, -0.297812,
    0.411842, -0.411888,
    0.681911, -0.681901,
    -0.488575, 0.488516,
    0.196917, -0.196826,
    -0.054430, 0.054439,
    -0.079694, 0.079654,
    0.235958, -0.235810,
    -0.090941, 0.090664,
    -0.515298, 0.515373,
    -0.001566, 0.001642,
};

float Cg_init[2] = {
    -0.323555, -0.323560
};

float xstd_init[12] = {
    0.003999, 0.001712, 0.146972, 0.203218, 0.001105, 0.000198, 0.028381, 0.083399, 0.000665, 0.000168, 0.029430, 0.107402
};

float xmean_init[12] = {
    0.010169, -0.005814, 0.240083, 0.682031, 0.003402, -0.007759, 0.009805, 0.076985, 0.003523, -0.007732, 0.013374, 0.119939
};

