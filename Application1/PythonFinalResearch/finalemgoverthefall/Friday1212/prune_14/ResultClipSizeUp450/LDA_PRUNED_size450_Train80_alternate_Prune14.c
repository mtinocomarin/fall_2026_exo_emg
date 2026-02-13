// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.62%
// test_accuracy: 74.22%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_28.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_39.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 15:53:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.277522, 1.277476,
    -0.058357, 0.058349,
    0.672427, -0.672462,
    1.228732, -1.228665,
    1.379133, -1.379202,
    -1.411265, 1.411394,
    -0.030653, 0.030620,
    -0.249096, 0.249058,
    -0.905359, 0.905158,
    0.903609, -0.903012,
    -0.871141, 0.870903,
    0.207747, -0.207994,
};

float Cg_init[2] = {
    -0.676048, -0.675994
};

float xstd_init[12] = {
    0.003910, 0.001490, 0.108849, 0.178479, 0.001831, 0.000568, 0.033807, 0.092589, 0.001771, 0.000099, 0.021896, 0.068647
};

float xmean_init[12] = {
    0.009847, -0.006213, 0.171019, 0.579305, 0.003409, -0.007691, 0.009259, 0.058750, 0.003392, -0.007797, 0.006574, 0.073889
};

