// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.17%
// test_accuracy: 68.75%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt']}
// generated: 2025-12-12 12:43:07
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.617965, 0.617997,
    0.156938, -0.156988,
    0.341273, -0.341296,
    0.651952, -0.651943,
    -0.523615, 0.523796,
    0.198957, -0.199147,
    0.065800, -0.065793,
    -0.169543, 0.169549,
    0.226305, -0.226111,
    -0.078396, 0.078046,
    -0.560289, 0.560382,
    0.023907, -0.023830,
};

float Cg_init[2] = {
    -0.302341, -0.302343
};

float xstd_init[12] = {
    0.004193, 0.001779, 0.147292, 0.202693, 0.001157, 0.000205, 0.029791, 0.086255, 0.000674, 0.000169, 0.030152, 0.106381
};

float xmean_init[12] = {
    0.010215, -0.005776, 0.239423, 0.679933, 0.003429, -0.007753, 0.009822, 0.081334, 0.003524, -0.007732, 0.012889, 0.117067
};

