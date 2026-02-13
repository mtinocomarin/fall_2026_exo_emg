// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.14%
// test_accuracy: 64.73%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-12 13:12:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.438832, 0.438875,
    -0.069812, 0.069790,
    0.498191, -0.498211,
    0.218490, -0.218492,
    -0.297250, 0.297180,
    0.047201, -0.047135,
    0.005205, -0.005204,
    0.071205, -0.071220,
    0.208721, -0.208768,
    -0.294780, 0.294895,
    -0.223078, 0.223019,
    0.324879, -0.324887,
};

float Cg_init[2] = {
    -0.182128, -0.182132
};

float xstd_init[12] = {
    0.004327, 0.001996, 0.343198, 0.123590, 0.001028, 0.000180, 0.045019, 0.132809, 0.000636, 0.000155, 0.047492, 0.139055
};

float xmean_init[12] = {
    0.010270, -0.005732, 0.432513, 1.034089, 0.003353, -0.007768, 0.010509, 0.618868, 0.003509, -0.007737, 0.014122, 0.698078
};

