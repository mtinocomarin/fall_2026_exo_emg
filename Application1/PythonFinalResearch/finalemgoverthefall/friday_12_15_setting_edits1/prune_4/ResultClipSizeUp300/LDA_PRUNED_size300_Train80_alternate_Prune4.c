// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.36%
// test_accuracy: 76.25%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-12 13:12:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.966428, 0.966449,
    0.243770, -0.243780,
    0.626205, -0.626213,
    0.498304, -0.498300,
    -0.365625, 0.365587,
    0.008842, -0.008820,
    0.010137, -0.010126,
    0.250705, -0.250692,
    -0.237096, 0.236982,
    0.040089, -0.039907,
    -0.367231, 0.367161,
    0.319148, -0.319150,
};

float Cg_init[2] = {
    -0.387636, -0.387629
};

float xstd_init[12] = {
    0.004726, 0.002160, 0.329874, 0.116232, 0.001448, 0.000262, 0.066580, 0.139541, 0.000665, 0.000154, 0.050404, 0.149819
};

float xmean_init[12] = {
    0.011136, -0.005440, 0.466905, 1.038857, 0.003583, -0.007724, 0.018571, 0.623857, 0.003569, -0.007730, 0.017143, 0.700142
};

