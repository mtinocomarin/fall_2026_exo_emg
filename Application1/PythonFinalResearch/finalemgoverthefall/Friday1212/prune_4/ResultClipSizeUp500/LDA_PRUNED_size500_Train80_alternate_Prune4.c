// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.96%
// test_accuracy: 74.31%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:47:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.761579, 0.761555,
    -0.209770, 0.209826,
    0.454813, -0.454844,
    0.729279, -0.729275,
    0.737042, -0.737048,
    -0.983032, 0.983042,
    0.042559, -0.042566,
    0.023683, -0.023681,
    -0.487122, 0.487184,
    0.521730, -0.521879,
    -0.494936, 0.495000,
    0.182597, -0.182551,
};

float Cg_init[2] = {
    -0.349315, -0.349334
};

float xstd_init[12] = {
    0.003905, 0.001447, 0.106188, 0.169756, 0.001571, 0.000465, 0.027166, 0.079821, 0.001570, 0.000091, 0.017283, 0.064742
};

float xmean_init[12] = {
    0.009888, -0.006204, 0.173228, 0.585238, 0.003183, -0.007734, 0.006614, 0.050079, 0.003247, -0.007806, 0.004709, 0.068413
};

