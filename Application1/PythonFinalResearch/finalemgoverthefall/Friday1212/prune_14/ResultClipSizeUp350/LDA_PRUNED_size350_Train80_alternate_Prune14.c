// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_14\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 93.52%
// test_accuracy: 68.75%
// prune_trials_per_label: 14
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-12 15:53:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.623297, 1.623257,
    0.015841, -0.015906,
    0.787052, -0.787058,
    1.550480, -1.550414,
    1.372305, -1.372298,
    -1.403398, 1.403353,
    0.012339, -0.012308,
    -0.348755, 0.348747,
    -0.651516, 0.651337,
    1.046258, -1.045634,
    -0.976305, 0.976035,
    0.132479, -0.132732,
};

float Cg_init[2] = {
    -0.843936, -0.843863
};

float xstd_init[12] = {
    0.004018, 0.001521, 0.106960, 0.179632, 0.001891, 0.000582, 0.037210, 0.098807, 0.001201, 0.000099, 0.023607, 0.067749
};

float xmean_init[12] = {
    0.010070, -0.006154, 0.175185, 0.580370, 0.003415, -0.007686, 0.010000, 0.059074, 0.003342, -0.007799, 0.006667, 0.071296
};

