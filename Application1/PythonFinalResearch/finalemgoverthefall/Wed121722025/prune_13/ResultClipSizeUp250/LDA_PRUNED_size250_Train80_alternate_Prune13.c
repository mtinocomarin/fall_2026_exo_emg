// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.76%
// test_accuracy: 57.81%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt']}
// generated: 2025-12-17 13:47:51
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.545835, 1.545740,
    0.334232, -0.334095,
    -0.123752, 0.123737,
    -0.129519, 0.129454,
    -0.852695, 0.852715,
    0.253035, -0.253013,
    -0.270480, 0.270447,
    -0.243326, 0.243306,
    -1.504146, 1.504068,
    1.124786, -1.124660,
    -0.726330, 0.726274,
    0.619084, -0.619102,
};

float Cg_init[2] = {
    -0.866323, -0.866285
};

float xstd_init[12] = {
    0.001034, 0.000073, 0.010032, 0.073154, 0.002409, 0.000681, 0.077974, 0.153677, 0.000917, 0.000133, 0.020162, 0.070568
};

float xmean_init[12] = {
    0.006450, -0.007689, 0.003509, 0.136842, 0.008367, -0.006950, 0.095439, 0.434210, 0.004438, -0.007704, 0.010526, 0.140526
};

