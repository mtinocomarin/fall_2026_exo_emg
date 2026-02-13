// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_11\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.71%
// test_accuracy: 65.62%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-12 13:16:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.699360, 0.699394,
    -0.011903, 0.011918,
    0.757919, -0.757930,
    0.455981, -0.455994,
    -0.637449, 0.637373,
    -0.004020, 0.004087,
    0.226257, -0.226258,
    0.205473, -0.205478,
    0.118803, -0.119069,
    -0.395006, 0.395387,
    -0.286207, 0.286096,
    0.474627, -0.474649,
};

float Cg_init[2] = {
    -0.410832, -0.410849
};

float xstd_init[12] = {
    0.004536, 0.001914, 0.342402, 0.128365, 0.001264, 0.000209, 0.061371, 0.138715, 0.000709, 0.000184, 0.057701, 0.136205
};

float xmean_init[12] = {
    0.010599, -0.005690, 0.445436, 1.030238, 0.003507, -0.007744, 0.017857, 0.623928, 0.003571, -0.007726, 0.017460, 0.702857
};

