// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_3\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.53%
// test_accuracy: 72.06%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-12 13:12:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.572019, 0.572022,
    0.019318, -0.019306,
    0.533629, -0.533649,
    0.213552, -0.213550,
    -0.314602, 0.314685,
    0.120659, -0.120756,
    -0.019784, 0.019787,
    0.173473, -0.173465,
    0.228811, -0.228857,
    -0.270259, 0.270339,
    -0.256255, 0.256225,
    0.256485, -0.256487,
};

float Cg_init[2] = {
    -0.178025, -0.178029
};

float xstd_init[12] = {
    0.004119, 0.001833, 0.339639, 0.122983, 0.000932, 0.000165, 0.041995, 0.129573, 0.000622, 0.000150, 0.045815, 0.138204
};

float xmean_init[12] = {
    0.010074, -0.005816, 0.421907, 1.037525, 0.003301, -0.007777, 0.008790, 0.617931, 0.003481, -0.007744, 0.013725, 0.689208
};

