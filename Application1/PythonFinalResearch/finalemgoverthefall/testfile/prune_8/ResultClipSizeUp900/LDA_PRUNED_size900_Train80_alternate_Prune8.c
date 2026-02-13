// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_8\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.58%
// test_accuracy: 72.06%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt']}
// generated: 2026-02-13 14:47:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.263285, 0.262983,
    -0.168621, 0.169285,
    0.004301, -0.004376,
    0.158137, -0.158470,
    1.475650, -1.475636,
    -0.984297, 0.984178,
    -0.085297, 0.085346,
    0.014753, -0.014725,
    -0.427441, 0.427496,
    -0.428370, 0.428309,
    0.545392, -0.545403,
    0.864504, -0.864526,
};

float Cg_init[2] = {
    -0.466833, -0.466841
};

float xstd_init[12] = {
    0.000933, 0.000073, 0.008355, 0.065314, 0.000668, 0.000104, 0.013769, 0.051165, 0.003260, 0.000994, 0.116299, 0.207716
};

float xmean_init[12] = {
    0.005561, -0.007756, 0.002288, 0.092991, 0.002344, -0.007857, 0.004248, 0.045147, 0.008880, -0.006616, 0.132550, 0.471765
};

