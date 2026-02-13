// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_2\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.33%
// test_accuracy: 63.28%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 13:12:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.822120, 0.822094,
    0.070520, -0.070516,
    0.587255, -0.587232,
    0.190082, -0.190092,
    -0.272715, 0.272658,
    0.063800, -0.063732,
    -0.038737, 0.038736,
    0.094495, -0.094495,
    0.218078, -0.218024,
    -0.249019, 0.248935,
    -0.226083, 0.226117,
    0.276249, -0.276247,
};

float Cg_init[2] = {
    -0.214168, -0.214164
};

float xstd_init[12] = {
    0.004904, 0.002303, 0.352372, 0.123649, 0.001223, 0.000214, 0.054603, 0.136063, 0.000663, 0.000163, 0.051206, 0.138047
};

float xmean_init[12] = {
    0.010885, -0.005481, 0.455277, 1.034000, 0.003447, -0.007752, 0.015417, 0.625666, 0.003523, -0.007736, 0.014722, 0.698334
};

