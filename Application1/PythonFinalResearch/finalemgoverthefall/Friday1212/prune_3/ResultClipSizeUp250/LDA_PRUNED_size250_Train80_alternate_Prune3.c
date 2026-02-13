// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.03%
// test_accuracy: 76.56%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-12 15:46:41
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.896258, 0.896241,
    -0.021267, 0.021274,
    0.454750, -0.454758,
    0.712586, -0.712574,
    0.745743, -0.745876,
    -0.975922, 0.976184,
    0.232379, -0.232492,
    -0.076470, 0.076453,
    -0.100964, 0.100975,
    0.228771, -0.228733,
    -0.345040, 0.345027,
    0.321862, -0.321877,
};

float Cg_init[2] = {
    -0.343418, -0.343427
};

float xstd_init[12] = {
    0.003607, 0.001289, 0.095623, 0.168030, 0.001627, 0.000493, 0.032564, 0.085244, 0.000854, 0.000091, 0.018931, 0.064198
};

float xmean_init[12] = {
    0.009708, -0.006295, 0.165172, 0.562241, 0.003183, -0.007729, 0.007931, 0.046379, 0.003180, -0.007807, 0.004138, 0.065862
};

