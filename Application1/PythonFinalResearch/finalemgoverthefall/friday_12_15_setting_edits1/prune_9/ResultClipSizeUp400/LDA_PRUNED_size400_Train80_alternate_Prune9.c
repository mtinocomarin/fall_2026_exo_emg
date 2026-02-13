// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_9\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 86.34%
// test_accuracy: 70.54%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 13:15:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.662626, 0.662606,
    -0.108173, 0.108196,
    0.687086, -0.687080,
    0.493825, -0.493832,
    -0.701002, 0.700998,
    0.248357, -0.248356,
    0.036534, -0.036531,
    0.257984, -0.257972,
    -0.098223, 0.098143,
    -0.071076, 0.071189,
    -0.384885, 0.384851,
    0.341158, -0.341155,
};

float Cg_init[2] = {
    -0.398129, -0.398127
};

float xstd_init[12] = {
    0.004723, 0.002132, 0.334633, 0.123502, 0.001346, 0.000237, 0.063260, 0.132321, 0.000699, 0.000168, 0.053676, 0.142954
};

float xmean_init[12] = {
    0.010751, -0.005614, 0.447619, 1.032298, 0.003550, -0.007734, 0.017805, 0.622981, 0.003553, -0.007732, 0.017391, 0.694285
};

