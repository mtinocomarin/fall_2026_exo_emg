// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 92.05%
// test_accuracy: 79.17%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_3.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_36.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-12 16:09:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.124270, 1.124241,
    -0.356820, 0.356807,
    0.662275, -0.662288,
    1.100903, -1.100869,
    1.396550, -1.396601,
    -1.939743, 1.939832,
    0.289416, -0.289421,
    -0.144674, 0.144659,
    1.018718, -1.018831,
    -0.366458, 0.366747,
    -0.622878, 0.622796,
    0.233113, -0.233220,
};

float Cg_init[2] = {
    -0.853669, -0.853691
};

float xstd_init[12] = {
    0.004138, 0.001559, 0.102890, 0.175060, 0.001837, 0.000578, 0.035089, 0.094824, 0.000558, 0.000093, 0.021573, 0.064570
};

float xmean_init[12] = {
    0.010112, -0.006160, 0.171919, 0.578182, 0.003427, -0.007662, 0.009798, 0.059848, 0.003131, -0.007807, 0.005657, 0.066364
};

