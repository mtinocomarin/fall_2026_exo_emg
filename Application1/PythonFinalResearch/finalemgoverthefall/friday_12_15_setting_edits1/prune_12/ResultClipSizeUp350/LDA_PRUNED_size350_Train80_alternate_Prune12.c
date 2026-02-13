// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_12\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.00%
// test_accuracy: 64.58%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-12 13:16:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.237343, 1.237365,
    0.258065, -0.258072,
    1.019691, -1.019691,
    0.539889, -0.539893,
    -0.358921, 0.358816,
    -0.136970, 0.137089,
    0.145154, -0.145160,
    0.137340, -0.137347,
    -0.211100, 0.211013,
    -0.453113, 0.453238,
    -0.099256, 0.099222,
    0.692753, -0.692759,
};

float Cg_init[2] = {
    -0.537446, -0.537454
};

float xstd_init[12] = {
    0.004743, 0.002057, 0.367824, 0.124595, 0.001347, 0.000230, 0.066968, 0.139200, 0.000703, 0.000179, 0.057361, 0.136970
};

float xmean_init[12] = {
    0.011200, -0.005443, 0.490833, 1.039167, 0.003545, -0.007737, 0.019167, 0.628000, 0.003609, -0.007720, 0.017778, 0.712000
};

