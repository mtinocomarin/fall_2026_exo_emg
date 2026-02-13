// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_2\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.69%
// test_accuracy: 71.88%
// prune_trials_per_label: 2
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt']}
// generated: 2025-12-17 12:37:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.648047, 0.648079,
    0.023471, -0.023520,
    0.268779, -0.268809,
    0.528389, -0.528383,
    -0.419973, 0.420072,
    0.195957, -0.196069,
    -0.007581, 0.007604,
    -0.051111, 0.051104,
    0.263612, -0.263403,
    -0.135717, 0.135378,
    -0.361132, 0.361223,
    0.028792, -0.028732,
};

float Cg_init[2] = {
    -0.189682, -0.189682
};

float xstd_init[12] = {
    0.004639, 0.002186, 0.151967, 0.203515, 0.001076, 0.000190, 0.027692, 0.081908, 0.000649, 0.000158, 0.028671, 0.103532
};

float xmean_init[12] = {
    0.010500, -0.005605, 0.247075, 0.685889, 0.003372, -0.007763, 0.008815, 0.076945, 0.003509, -0.007737, 0.012407, 0.116001
};

