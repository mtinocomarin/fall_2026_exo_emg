// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 76.56%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:49:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.217270, 1.217258,
    0.122364, -0.122404,
    0.710990, -0.711001,
    0.795148, -0.795117,
    0.947141, -0.947181,
    -1.063182, 1.063169,
    0.177188, -0.177135,
    -0.202012, 0.202023,
    -0.131714, 0.131657,
    0.183413, -0.183165,
    -0.431600, 0.431521,
    0.459845, -0.459962,
};

float Cg_init[2] = {
    -0.479920, -0.479915
};

float xstd_init[12] = {
    0.003734, 0.001355, 0.099459, 0.173704, 0.001722, 0.000526, 0.034901, 0.090218, 0.000899, 0.000096, 0.020203, 0.067316
};

float xmean_init[12] = {
    0.009885, -0.006242, 0.168800, 0.565800, 0.003286, -0.007707, 0.009067, 0.051200, 0.003242, -0.007803, 0.004533, 0.068200
};

