// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.14%
// test_accuracy: 66.52%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_17.txt', 'act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:14:38
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.587857, 0.587900,
    0.105968, -0.105992,
    0.633690, -0.633695,
    0.313609, -0.313618,
    -0.422980, 0.422819,
    0.072603, -0.072437,
    0.045367, -0.045363,
    0.059360, -0.059381,
    0.334485, -0.334603,
    -0.497773, 0.498010,
    -0.207813, 0.207720,
    0.507058, -0.507102,
};

float Cg_init[2] = {
    -0.298788, -0.298808
};

float xstd_init[12] = {
    0.004160, 0.001818, 0.349647, 0.124290, 0.001088, 0.000190, 0.048280, 0.133651, 0.000643, 0.000160, 0.048293, 0.135294
};

float xmean_init[12] = {
    0.010183, -0.005786, 0.430095, 1.034514, 0.003390, -0.007763, 0.012190, 0.617258, 0.003509, -0.007736, 0.013143, 0.700686
};

