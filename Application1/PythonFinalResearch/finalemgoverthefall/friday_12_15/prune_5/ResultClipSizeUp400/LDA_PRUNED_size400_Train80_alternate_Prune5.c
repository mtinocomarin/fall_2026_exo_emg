// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.86%
// test_accuracy: 79.46%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt']}
// generated: 2025-12-12 12:41:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.038558, 1.038562,
    0.258840, -0.258826,
    0.305929, -0.305951,
    0.954757, -0.954747,
    -0.336011, 0.336022,
    0.037026, -0.037040,
    -0.067709, 0.067710,
    -0.092054, 0.092050,
    0.006777, -0.006797,
    0.145996, -0.145946,
    -0.519879, 0.519871,
    -0.151607, 0.151578,
};

float Cg_init[2] = {
    -0.405017, -0.405019
};

float xstd_init[12] = {
    0.004537, 0.001949, 0.144478, 0.201268, 0.001323, 0.000240, 0.033470, 0.095054, 0.000681, 0.000163, 0.028888, 0.103478
};

float xmean_init[12] = {
    0.010688, -0.005648, 0.244868, 0.682117, 0.003522, -0.007736, 0.012275, 0.083598, 0.003538, -0.007730, 0.013686, 0.120106
};

