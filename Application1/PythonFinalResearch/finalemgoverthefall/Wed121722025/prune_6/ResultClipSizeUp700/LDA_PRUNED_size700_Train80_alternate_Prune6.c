// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.56%
// test_accuracy: 53.37%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-17 13:44:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.447886, 0.447893,
    0.294435, -0.294453,
    -0.012237, 0.012244,
    -0.171240, 0.171238,
    -0.394902, 0.394985,
    -0.220206, 0.220138,
    0.036118, -0.036136,
    0.316450, -0.316462,
    -0.500099, 0.500081,
    0.259161, -0.259085,
    -0.015829, 0.015817,
    0.137892, -0.137941,
};

float Cg_init[2] = {
    -0.160145, -0.160145
};

float xstd_init[12] = {
    0.001029, 0.000080, 0.011557, 0.079682, 0.003129, 0.000855, 0.092259, 0.186041, 0.000870, 0.000114, 0.019656, 0.075361
};

float xmean_init[12] = {
    0.006464, -0.007689, 0.004379, 0.144971, 0.008567, -0.006860, 0.104734, 0.436095, 0.004389, -0.007711, 0.010769, 0.130888
};

