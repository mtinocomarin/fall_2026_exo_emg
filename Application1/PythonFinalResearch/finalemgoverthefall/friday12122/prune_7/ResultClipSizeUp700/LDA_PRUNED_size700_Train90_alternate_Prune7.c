// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.82%
// test_accuracy: 77.88%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 16:05:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.470449, 0.470450,
    -0.412771, 0.412767,
    0.278575, -0.278588,
    0.646155, -0.646142,
    0.626323, -0.626323,
    -0.689265, 0.689260,
    -0.143545, 0.143562,
    -0.084195, 0.084185,
    0.800767, -0.800862,
    -0.041086, 0.041351,
    -0.376741, 0.376654,
    -0.008472, 0.008362,
};

float Cg_init[2] = {
    -0.445606, -0.445614
};

float xstd_init[12] = {
    0.003691, 0.001363, 0.107363, 0.169654, 0.001252, 0.000388, 0.019237, 0.068167, 0.000511, 0.000074, 0.015120, 0.061624
};

float xmean_init[12] = {
    0.009776, -0.006248, 0.174925, 0.589072, 0.003068, -0.007756, 0.005057, 0.046366, 0.003095, -0.007814, 0.003996, 0.063926
};

