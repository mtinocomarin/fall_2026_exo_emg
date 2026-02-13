// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 83.33%
// test_accuracy: 77.88%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt']}
// generated: 2025-12-12 16:05:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.425305, 0.425269,
    -0.447072, 0.447083,
    0.260247, -0.260253,
    0.620700, -0.620676,
    0.644745, -0.644779,
    -0.721255, 0.721334,
    -0.130267, 0.130258,
    -0.069809, 0.069782,
    0.788902, -0.789088,
    -0.138252, 0.138743,
    -0.330992, 0.330838,
    0.043412, -0.043604,
};

float Cg_init[2] = {
    -0.421527, -0.421550
};

float xstd_init[12] = {
    0.003690, 0.001369, 0.106637, 0.168516, 0.001236, 0.000382, 0.018935, 0.067374, 0.000516, 0.000076, 0.014926, 0.061597
};

float xmean_init[12] = {
    0.009768, -0.006254, 0.173334, 0.587692, 0.003053, -0.007759, 0.004889, 0.045898, 0.003092, -0.007813, 0.003932, 0.064462
};

