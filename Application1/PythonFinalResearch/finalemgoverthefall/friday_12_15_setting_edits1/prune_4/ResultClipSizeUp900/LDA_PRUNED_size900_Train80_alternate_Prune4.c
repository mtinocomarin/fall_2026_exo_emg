// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_4\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.58%
// test_accuracy: 71.69%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:13:15
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.624498, 0.624494,
    0.018834, -0.018820,
    0.596309, -0.596325,
    0.234031, -0.234031,
    -0.334348, 0.334315,
    0.140762, -0.140724,
    -0.021068, 0.021063,
    0.160401, -0.160400,
    0.263897, -0.263914,
    -0.285013, 0.285053,
    -0.255969, 0.255949,
    0.288022, -0.288019,
};

float Cg_init[2] = {
    -0.199717, -0.199718
};

float xstd_init[12] = {
    0.004138, 0.001841, 0.341130, 0.122768, 0.000943, 0.000167, 0.042706, 0.130275, 0.000622, 0.000150, 0.045338, 0.136542
};

float xmean_init[12] = {
    0.010063, -0.005817, 0.421149, 1.038319, 0.003305, -0.007777, 0.009104, 0.616680, 0.003476, -0.007745, 0.012815, 0.688361
};

