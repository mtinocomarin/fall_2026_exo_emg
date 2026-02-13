// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.09%
// test_accuracy: 64.06%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 13:12:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.793903, 0.793896,
    0.040786, -0.040781,
    0.568891, -0.568872,
    0.261024, -0.261038,
    -0.244376, 0.244240,
    0.030685, -0.030550,
    -0.043348, 0.043357,
    0.091615, -0.091619,
    0.241133, -0.241155,
    -0.274238, 0.274272,
    -0.244234, 0.244231,
    0.303001, -0.303009,
};

float Cg_init[2] = {
    -0.233570, -0.233571
};

float xstd_init[12] = {
    0.004922, 0.002323, 0.355820, 0.122096, 0.001240, 0.000216, 0.055462, 0.135227, 0.000670, 0.000165, 0.052009, 0.138437
};

float xmean_init[12] = {
    0.010935, -0.005453, 0.460775, 1.036207, 0.003466, -0.007749, 0.015948, 0.628793, 0.003531, -0.007734, 0.015230, 0.699311
};

