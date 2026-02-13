// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\prune_12\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_140842\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 97.50%
// test_accuracy: 67.50%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_17.txt', 'act1\\trial_12.txt', 'act1\\trial_18.txt', 'act1\\trial_10.txt', 'act1\\trial_6.txt', 'act1\\trial_15.txt', 'act1\\trial_20.txt', 'act1\\trial_16.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_4.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_6.txt', 'act2\\trial_8.txt', 'act2\\trial_12.txt', 'act2\\trial_4.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 14:42:59
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -3.879617, 3.879628,
    1.818513, -1.818478,
    0.552183, -0.552199,
    -1.160760, 1.160733,
    -1.484047, 1.484053,
    0.499912, -0.499920,
    -0.439101, 0.439115,
    1.269351, -1.269359,
    0.575463, -0.575461,
    0.015143, -0.015170,
    0.127206, -0.127196,
    -0.458007, 0.458023,
};

float Cg_init[2] = {
    -1.362404, -1.362416
};

float xstd_init[12] = {
    0.001433, 0.000252, 0.037127, 0.157216, 0.003843, 0.001169, 0.088796, 0.188622, 0.000879, 0.000151, 0.034362, 0.121906
};

float xmean_init[12] = {
    0.006266, -0.007573, 0.017778, 0.227000, 0.009859, -0.006452, 0.140444, 0.535000, 0.005252, -0.007540, 0.029556, 0.266000
};

