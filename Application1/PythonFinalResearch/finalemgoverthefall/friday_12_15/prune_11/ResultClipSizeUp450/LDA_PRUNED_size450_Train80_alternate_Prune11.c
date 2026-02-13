// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.18%
// test_accuracy: 77.34%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_28.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt']}
// generated: 2025-12-12 12:45:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.263810, 1.263834,
    0.207865, -0.207892,
    0.139548, -0.139579,
    1.614873, -1.614849,
    -0.445078, 0.444906,
    0.212811, -0.212638,
    -0.122204, 0.122238,
    -0.268714, 0.268679,
    0.357093, -0.357000,
    -0.152690, 0.152528,
    -0.772333, 0.772372,
    0.011246, -0.011202,
};

float Cg_init[2] = {
    -0.610604, -0.610596
};

float xstd_init[12] = {
    0.004332, 0.001843, 0.147955, 0.204889, 0.001350, 0.000234, 0.035191, 0.092046, 0.000704, 0.000184, 0.031984, 0.107722
};

float xmean_init[12] = {
    0.010638, -0.005619, 0.246588, 0.690119, 0.003523, -0.007740, 0.012222, 0.082262, 0.003558, -0.007722, 0.013730, 0.121429
};

