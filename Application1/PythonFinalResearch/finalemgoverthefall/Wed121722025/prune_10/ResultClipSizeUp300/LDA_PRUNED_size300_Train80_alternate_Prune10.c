// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.64%
// test_accuracy: 55.00%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_8.txt']}
// generated: 2025-12-17 13:46:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.882804, 0.882742,
    0.448572, -0.448442,
    0.320848, -0.320863,
    -0.112937, 0.112871,
    -0.644468, 0.644453,
    -0.397337, 0.397335,
    0.451100, -0.451081,
    0.239430, -0.239428,
    -1.135032, 1.135023,
    0.362891, -0.362884,
    -0.253312, 0.253317,
    0.599090, -0.599090,
};

float Cg_init[2] = {
    -0.431038, -0.431020
};

float xstd_init[12] = {
    0.001044, 0.000082, 0.011124, 0.080591, 0.002593, 0.000764, 0.083178, 0.167503, 0.000930, 0.000120, 0.018480, 0.076516
};

float xmean_init[12] = {
    0.006486, -0.007687, 0.004364, 0.140182, 0.008614, -0.006874, 0.101818, 0.454182, 0.004359, -0.007714, 0.009818, 0.132546
};

