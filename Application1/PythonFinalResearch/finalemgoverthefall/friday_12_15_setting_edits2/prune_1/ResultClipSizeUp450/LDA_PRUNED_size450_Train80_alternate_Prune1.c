// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_1\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.64%
// test_accuracy: 77.34%
// prune_trials_per_label: 1
// removed_trials: {'act1': ['act1\\trial_33.txt'], 'act2': ['act2\\trial_15.txt']}
// generated: 2025-12-17 12:36:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.040729, 1.040736,
    0.245635, -0.245614,
    0.120311, -0.120332,
    0.813469, -0.813457,
    -0.356585, 0.356564,
    0.120134, -0.120112,
    -0.016023, 0.016024,
    -0.040856, 0.040845,
    0.142748, -0.142801,
    -0.075703, 0.075812,
    -0.400393, 0.400378,
    0.100781, -0.100831,
};

float Cg_init[2] = {
    -0.262878, -0.262881
};

float xstd_init[12] = {
    0.004841, 0.002248, 0.149178, 0.205089, 0.001213, 0.000213, 0.031212, 0.089478, 0.000669, 0.000164, 0.030036, 0.103747
};

float xmean_init[12] = {
    0.010853, -0.005489, 0.248388, 0.687661, 0.003442, -0.007751, 0.010430, 0.079597, 0.003525, -0.007733, 0.013226, 0.116855
};

