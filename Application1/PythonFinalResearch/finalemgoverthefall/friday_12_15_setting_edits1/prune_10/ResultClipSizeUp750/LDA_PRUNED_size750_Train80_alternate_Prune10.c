// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.66%
// test_accuracy: 65.18%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_26.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:16:14
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.566187, 0.566165,
    0.012161, -0.012171,
    0.724841, -0.724810,
    0.327439, -0.327444,
    -0.762601, 0.762534,
    0.298885, -0.298800,
    0.129576, -0.129580,
    0.090405, -0.090411,
    0.376241, -0.376150,
    -0.305964, 0.305852,
    -0.268902, 0.268934,
    0.515920, -0.515912,
};

float Cg_init[2] = {
    -0.356519, -0.356508
};

float xstd_init[12] = {
    0.004183, 0.001873, 0.356161, 0.125241, 0.001141, 0.000200, 0.050580, 0.133117, 0.000573, 0.000129, 0.039046, 0.136477
};

float xmean_init[12] = {
    0.010399, -0.005682, 0.450540, 1.037727, 0.003415, -0.007757, 0.012879, 0.617273, 0.003477, -0.007749, 0.010065, 0.697403
};

