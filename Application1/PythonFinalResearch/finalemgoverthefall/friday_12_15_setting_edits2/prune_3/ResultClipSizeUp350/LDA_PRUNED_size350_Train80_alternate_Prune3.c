// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_3\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.63%
// test_accuracy: 81.25%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-17 12:37:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.080356, 1.080338,
    0.148086, -0.148083,
    0.156281, -0.156311,
    1.002152, -1.002140,
    -0.327583, 0.327498,
    -0.040846, 0.040979,
    0.012578, -0.012566,
    -0.012308, 0.012259,
    0.008012, -0.007894,
    0.044706, -0.044967,
    -0.450899, 0.450970,
    -0.000075, 0.000175,
};

float Cg_init[2] = {
    -0.369248, -0.369251
};

float xstd_init[12] = {
    0.004807, 0.002223, 0.146265, 0.202885, 0.001337, 0.000241, 0.033872, 0.093417, 0.000661, 0.000162, 0.029840, 0.103665
};

float xmean_init[12] = {
    0.010970, -0.005487, 0.247663, 0.689080, 0.003504, -0.007737, 0.011801, 0.084483, 0.003536, -0.007732, 0.012337, 0.118736
};

