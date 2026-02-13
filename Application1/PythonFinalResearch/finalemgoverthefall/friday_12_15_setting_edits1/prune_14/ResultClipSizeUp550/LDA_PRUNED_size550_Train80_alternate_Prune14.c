// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 68.75%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_30.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_21.txt', 'act2\\trial_37.txt', 'act2\\trial_40.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-12 13:18:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.551834, 0.551794,
    -0.330927, 0.330935,
    0.960797, -0.960775,
    0.552242, -0.552230,
    -0.609372, 0.609504,
    0.060320, -0.060468,
    0.074068, -0.074057,
    0.265365, -0.265347,
    0.273207, -0.273121,
    -0.468346, 0.468160,
    -0.362629, 0.362708,
    0.522985, -0.522962,
};

float Cg_init[2] = {
    -0.498036, -0.498019
};

float xstd_init[12] = {
    0.004711, 0.002219, 0.354280, 0.128497, 0.001137, 0.000211, 0.049682, 0.138142, 0.000730, 0.000189, 0.057058, 0.137319
};

float xmean_init[12] = {
    0.010706, -0.005523, 0.459999, 1.031000, 0.003447, -0.007750, 0.013889, 0.616889, 0.003608, -0.007717, 0.017222, 0.710555
};

