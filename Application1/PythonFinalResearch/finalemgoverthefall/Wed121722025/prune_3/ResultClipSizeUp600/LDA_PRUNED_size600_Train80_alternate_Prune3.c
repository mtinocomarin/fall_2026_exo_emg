// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 67.40%
// test_accuracy: 52.84%
// prune_trials_per_label: 3
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 13:42:47
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.300951, 0.300955,
    0.154567, -0.154606,
    0.036259, -0.036249,
    -0.098218, 0.098231,
    -0.489195, 0.489256,
    -0.036895, 0.036853,
    0.054515, -0.054538,
    0.295618, -0.295632,
    -0.453320, 0.453261,
    0.159390, -0.159237,
    0.006087, -0.006116,
    0.160775, -0.160852,
};

float Cg_init[2] = {
    -0.118153, -0.118150
};

float xstd_init[12] = {
    0.000996, 0.000079, 0.011941, 0.080126, 0.002986, 0.000829, 0.089919, 0.179146, 0.000841, 0.000108, 0.018608, 0.073431
};

float xmean_init[12] = {
    0.006451, -0.007691, 0.004514, 0.142947, 0.008674, -0.006838, 0.107837, 0.443511, 0.004299, -0.007722, 0.009781, 0.125079
};

