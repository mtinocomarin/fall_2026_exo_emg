// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.91%
// test_accuracy: 71.67%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 13:12:43
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.536708, 0.536693,
    -0.029740, 0.029726,
    0.503428, -0.503426,
    0.268008, -0.268000,
    -0.375905, 0.375552,
    0.142876, -0.142475,
    -0.008481, 0.008466,
    0.145832, -0.145847,
    0.203679, -0.203506,
    -0.258453, 0.258219,
    -0.287244, 0.287304,
    0.279721, -0.279678,
};

float Cg_init[2] = {
    -0.195494, -0.195478
};

float xstd_init[12] = {
    0.004393, 0.002038, 0.344398, 0.122289, 0.000986, 0.000175, 0.044580, 0.129734, 0.000638, 0.000154, 0.046012, 0.138347
};

float xmean_init[12] = {
    0.010262, -0.005718, 0.432108, 1.037011, 0.003332, -0.007772, 0.009962, 0.616643, 0.003508, -0.007737, 0.014483, 0.696138
};

