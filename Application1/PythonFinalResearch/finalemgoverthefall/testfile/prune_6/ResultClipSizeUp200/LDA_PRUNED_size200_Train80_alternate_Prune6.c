// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.67%
// test_accuracy: 68.75%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt']}
// generated: 2026-02-13 14:45:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.304487, -0.304376,
    0.344305, -0.344589,
    -0.159235, 0.159300,
    -0.632653, 0.632805,
    1.409403, -1.409381,
    -1.116652, 1.116605,
    -0.292036, 0.292032,
    0.204454, -0.204439,
    -0.567166, 0.567135,
    -0.718066, 0.718137,
    0.497990, -0.498022,
    1.840255, -1.840256,
};

float Cg_init[2] = {
    -0.712822, -0.712839
};

float xstd_init[12] = {
    0.000883, 0.000061, 0.007896, 0.068964, 0.000759, 0.000125, 0.017235, 0.058650, 0.002936, 0.000897, 0.116758, 0.212356
};

float xmean_init[12] = {
    0.005572, -0.007763, 0.001368, 0.089744, 0.002382, -0.007848, 0.006496, 0.052308, 0.008683, -0.006704, 0.129914, 0.462051
};

