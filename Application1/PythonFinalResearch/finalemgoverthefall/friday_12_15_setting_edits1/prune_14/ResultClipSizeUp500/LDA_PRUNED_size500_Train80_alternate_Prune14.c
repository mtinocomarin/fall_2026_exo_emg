// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.73%
// test_accuracy: 72.92%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_3.txt', 'act1\\trial_35.txt', 'act1\\trial_8.txt', 'act1\\trial_12.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-12 13:17:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.797189, 0.797177,
    0.170338, -0.170334,
    0.922169, -0.922165,
    0.545233, -0.545230,
    -0.855385, 0.855312,
    0.093919, -0.093839,
    0.203679, -0.203683,
    0.347699, -0.347694,
    0.270763, -0.270774,
    -0.397458, 0.397467,
    -0.488537, 0.488532,
    0.364373, -0.364355,
};

float Cg_init[2] = {
    -0.526193, -0.526184
};

float xstd_init[12] = {
    0.004239, 0.001777, 0.324231, 0.126352, 0.001257, 0.000216, 0.061539, 0.139245, 0.000720, 0.000190, 0.054166, 0.143288
};

float xmean_init[12] = {
    0.010112, -0.005894, 0.407407, 1.023210, 0.003488, -0.007746, 0.016049, 0.614197, 0.003518, -0.007734, 0.016049, 0.684567
};

