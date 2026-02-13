// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 65.62%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:15:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.089715, 1.089729,
    0.152830, -0.152829,
    0.955576, -0.955573,
    0.480640, -0.480644,
    -0.362942, 0.362751,
    -0.016281, 0.016457,
    0.001567, -0.001544,
    0.152917, -0.152920,
    -0.150183, 0.150121,
    -0.375026, 0.375113,
    -0.141223, 0.141203,
    0.599516, -0.599515,
};

float Cg_init[2] = {
    -0.485945, -0.485946
};

float xstd_init[12] = {
    0.004681, 0.002010, 0.360768, 0.123124, 0.001477, 0.000267, 0.066559, 0.137139, 0.000689, 0.000173, 0.054920, 0.138234
};

float xmean_init[12] = {
    0.011047, -0.005523, 0.472727, 1.040909, 0.003612, -0.007720, 0.020455, 0.630606, 0.003571, -0.007726, 0.016162, 0.706515
};

