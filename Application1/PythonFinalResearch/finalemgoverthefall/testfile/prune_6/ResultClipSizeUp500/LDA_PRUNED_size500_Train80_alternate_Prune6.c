// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_6\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.82%
// test_accuracy: 72.22%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_23.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt']}
// generated: 2026-02-13 14:46:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.094608, -0.094713,
    -0.217064, 0.217288,
    0.016997, -0.017029,
    -0.085564, 0.085452,
    1.640170, -1.640102,
    -1.461378, 1.461254,
    -0.231058, 0.231090,
    0.209572, -0.209542,
    -0.581788, 0.581757,
    -0.536740, 0.536772,
    0.357046, -0.357057,
    1.508374, -1.508384,
};

float Cg_init[2] = {
    -0.570927, -0.570916
};

float xstd_init[12] = {
    0.000873, 0.000079, 0.007588, 0.065670, 0.000775, 0.000134, 0.015692, 0.055534, 0.003415, 0.001033, 0.118083, 0.210976
};

float xmean_init[12] = {
    0.005536, -0.007759, 0.001823, 0.090171, 0.002422, -0.007845, 0.005413, 0.049402, 0.008960, -0.006627, 0.132080, 0.467265
};

